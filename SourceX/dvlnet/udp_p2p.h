#pragma once

#include <string>
#include <set>
 

namespace dvl {
namespace net {

class udp_p2p  {
public:
	virtual int create(std::string addrstr, std::string passwd);
	virtual int join(std::string addrstr, std::string passwd);
	virtual void poll();
	 
 
};

}  // namespace net
}  // namespace dvl
