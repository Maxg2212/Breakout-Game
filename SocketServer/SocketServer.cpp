//
// Created by michael on 3/9/21.
//

#include "SocketServer.h"

SocketServer::SocketServer() {

}

bool SocketServer::crear_socket() {
    //Crear descriptor
    descriptor = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    if(descriptor < 0) //valida creación de socket
        return false;

    info.sin_family = AF_INET;// tipo de conexion ipv4
    info.sin_addr.s_addr = INADDR_ANY; //aceptamos a cualquier cliente
    info.sin_port = htons(4050);//define el puerto
    memset(&info.sin_zero,0,sizeof(info.sin_zero)); //limpia la estructura
    return true;
}

bool SocketServer::enlazar_kernel() {
    if(bind(descriptor,(sockaddr *)&info,(socklen_t)sizeof(info)) < 0)
        return false;
    //escuchar a clientes
    listen(descriptor,1);
    return true;
}

void SocketServer::run() {
    if(!crear_socket())
        throw string("Hubo un error al crear el socket");
    if(!enlazar_kernel())
        throw string("Hubo un error enlazar el kernel");

    //Ciclo infinito para aceptar a clientes
    while(true){
        dataSocket data;
        socklen_t t = sizeof(data.info);
        cout << "Esperando a que se conecte un cliente" << endl;
        data.descriptor = accept(descriptor,(sockaddr *)&data.info,&t);
        if(data.descriptor < 0){
            cout << "Error al aceptar el cliente" << endl;
            break;
        }
        else {
            clientes.push_back(data.descriptor);
            cout << "Cliente conectado" << endl;
            //pthread_t hilo;
            //pthread_create(&hilo, 0, SocketServer::ContoladorCliente, (void *) &data);
            //pthread_detach(hilo);
            ContoladorCliente((void *) &data);
        }
    }
    close(descriptor);
}

void *SocketServer::ContoladorCliente(void *obj) {
    dataSocket* data = (dataSocket *)obj;
    while(true){
        string mensaje;
        char buffer[1024] = {0};
        while(1){
            memset(buffer,0,1024);
            int bytes = recv(data->descriptor,buffer,1024,0);
            mensaje.append(buffer,bytes);
            if(bytes <= 0){
                close(data->descriptor);
                pthread_exit(NULL);
            }
            if(bytes < 1024){
                break;
            }
        }
        cout << mensaje << endl;
        //aca se puede enviar mensajes para otra clase o para el juego

        Json::Reader reader;
        Json::Value root;
        string json_string;
        reader.parse(mensaje,root);

        string blockScore;
        string newBall;
        string json_ball;

        int receivedScore = stoi(root["score"].asString());

        if(root["info"].asString() == "común"){
            blockScore = "10";
            string blocktype_json_score = "\""+blockScore+"\"";

            if(receivedScore % 200==0 and receivedScore != 0){
                newBall = "newBall";
                json_ball = "\""+newBall+"\"";

            }else{
                newBall = "noMoreBalls";
                json_ball = "\""+newBall+"\"";
            }
            string json_ = "{\"block_points\":" + blocktype_json_score+ + "," + "\"balls\":" + json_ball + "}";

            cout << "Común: " << json_ << endl;

            const char* json_message = json_.c_str();
            setMensaje(json_message);

        }else if(root["info"].asString() == "doble"){

            blockScore = "15";
            string blocktype_json_score = "\""+blockScore+"\"";

            if(receivedScore % 200==0 and receivedScore != 0){
                newBall = "newBall";
                json_ball = "\""+newBall+"\"";

            }else{
                newBall = "noMoreBalls";
                json_ball = "\""+newBall+"\"";
            }
            string json_ = "{\"block_points\":" + blocktype_json_score+ + "," + "\"score\":" + json_ball + "}";

            cout << "Doble : " << json_ << endl;

            const char* json_message = json_.c_str();
            setMensaje(json_message);

        }else if(root["info"].asString() == "triple"){

            blockScore = "20";
            string blocktype_json_score = "\""+blockScore+"\"";

            if(receivedScore % 200==0 and receivedScore != 0){
                newBall = "newBall";
                json_ball = "\""+newBall+"\"";

            }else{
                newBall = "noMoreBalls";
                json_ball = "\""+newBall+"\"";
            }
            string json_ = "{\"block_points\":" + blocktype_json_score+ + "," + "\"balls\":" + json_ball + "}";

            cout << "Triple : " << json_ << endl;

            const char* json_message = json_.c_str();
            setMensaje(json_message);

        }else if(root["info"].asString() == "interno"){

            blockScore = "30";
            string blocktype_json_score = "\""+blockScore+"\"";

            if(receivedScore % 200==0 and receivedScore != 0){
                newBall = "newBall";
                json_ball = "\""+newBall+"\"";

            }else{
                newBall = "noMoreBalls";
                json_ball = "\""+newBall+"\"";
            }
            string json_ = "{\"block_points\":" + blocktype_json_score+ + "," + "\"balls\":" + json_ball + "}";

            cout << "Interno : " << json_ << endl;

            const char* json_message = json_.c_str();
            setMensaje(json_message);

        }else if(root["info"].asString() == "profundo"){

            blockScore = "0";
            string blocktype_json_score = "\""+blockScore+"\"";
            if(receivedScore % 200==0 and receivedScore != 0){
                newBall = "newBall";
                json_ball = "\""+newBall+"\"";

            }else{
                newBall = "noMoreBalls";
                json_ball = "\""+newBall+"\"";
            }
            string json_ = "{\"block_points\":" + blocktype_json_score+ + "," + "\"balls\":" + json_ball + "}";

            cout << "Profundo : " << json_ << endl;

            const char* json_message = json_.c_str();
            setMensaje(json_message);

        }else{
            blockScore = "0";
            string blocktype_json_score = "\""+blockScore+"\"";

            if(receivedScore % 200==0 and receivedScore != 0){
                newBall = "newBall";
                json_ball = "\""+newBall+"\"";

            }else{
                newBall = "noMoreBalls";
                json_ball = "\""+newBall+"\"";
            }

            string json_ = "{\"block_points\":" + blocktype_json_score+ + "," + "\"balls\":" + json_ball + "}";

            cout << "Sorpresa : " << json_ << endl;

            const char* json_message = json_.c_str();
            setMensaje(json_message);
        }
    }
    close(data->descriptor);
    pthread_exit(NULL);
}

void SocketServer::setMensaje(const char *msn) {
    for(int i = 0; i < clientes.size(); i++){
        send(clientes[i],msn, strlen(msn),0);
    }
}