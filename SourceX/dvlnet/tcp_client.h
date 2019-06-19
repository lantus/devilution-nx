#pragma once

#include <string>
#include <memory>
 
 

namespace dvl {
namespace net {

class tcp_client  {
	
public:
	int create(std::string addrstr, std::string passwd);
	int join(std::string addrstr, std::string passwd);

	constexpr static unsigned short default_port = 6112;

	virtual void poll();
 
	 
};

}  // namespace net
}  // namespace dvl
