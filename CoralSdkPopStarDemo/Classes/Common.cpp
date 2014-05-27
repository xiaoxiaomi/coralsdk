#include <stdio.h>
#include <string.h>
#include "Common.h"
#include "cocos2d.h"


int Common::getlen(char *result)
{
    int i=0;
    while(result[i]!='\0'){
        i++;
    }
    return i;
}

string Common::getResource (string b)
{

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    return b;
#endif

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    int len = b.rfind("/", b.length()-1);
    string a = b.replace ( 0 , len+1 , "" );
    
    return a;
#endif
}
const char* Common::getResourceData (string b)
{
    string a = Common::getResource (b);
    return a.data();
}


