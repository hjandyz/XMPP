// 
// Core classes
// 

#import "XMPPJID.h"
#import "XMPPStream.h"
#import "XMPPElement.h"
#import "XMPPIQ.h"
#import "XMPPMessage.h"
#import "XMPPPresence.h"
#import "XMPPModule.h"

// 
// Authentication
// 

#import "XMPPSASLAuthentication.h"
#import "XMPPCustomBinding.h"
#import "XMPPDigestMD5Authentication.h"
#import "XMPPSCRAMSHA1Authentication.h"
#import "XMPPPlainAuthentication.h"
#import "XMPPXFacebookPlatformAuthentication.h"
#import "XMPPAnonymousAuthentication.h"
#import "XMPPDeprecatedPlainAuthentication.h"
#import "XMPPDeprecatedDigestAuthentication.h"

// 
// Categories
// 

#import "NSXMLElement+XMPP.h"


//名片
#import "XMPPvCardTempModule.h"
#import "XMPPvCardCoreDataStorage.h"

//头像
#import "XMPPvCardAvatarModule.h"

//自动连接模块
#import "XMPPReconnect.h"

//花名册
#import "XMPPRoster.h"
//#import "XMPPRosterMemoryStorage.h"
#import "XMPPRosterCoreDataStorage.h"

//消息模块
#import "XMPPMessageArchiving.h"
#import "XMPPMessageArchivingCoreDataStorage.h"

