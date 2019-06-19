#pragma once

#include <string>
#include <memory>
#include <array>
 

namespace dvl {
namespace net {

class server_exception  ;

class tcp_server {
public:
	tcp_server();
	std::string localhost_self();
 
};

}  //namespace net
}  //namespace dvl
