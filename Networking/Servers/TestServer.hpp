//
//  TestServer.hpp
//  hdelibc
//
//  Created by Augusta Bhardwaj on 15/08/24.
//

#ifndef TestServer_hpp
#define TestServer_hpp

#include <stdio.h>
#include <unistd.h>

#include "SimpleServer.hpp"

namespace HDE {

class TestServer : public SimpleServer
{
private:
    char buffer[30000] = {0};
    int new_socket;
    
    void accepter();
    void handler();
    void responder();
public:
    TestServer();
    void launch();
};

}

#endif /* TestServer_hpp */
