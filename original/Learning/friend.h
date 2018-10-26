//
//  friend.h
//  Learning
//
//  Created by Trevor Hall on 2/21/16.
//  Copyright © 2016 hallta. All rights reserved.
//

#ifndef friend_h
#define friend_h

#include <string>

struct Friend {
    std::string name;
    bool mean;
};

Friend getFriend(std::string);


#endif /* friend_h */
