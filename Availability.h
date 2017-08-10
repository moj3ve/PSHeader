#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define __IPHONE_8_0 80000
#define __IPHONE_8_2 80200
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define __IPHONE_11_0 110000

#define FROM_IOS(VER) IPHONEOS_DEPLOYMENT_TARGET <= __IPHONE_ ## VER
#define TO_IOS(VER) __IPHONE_OS_VERSION_MAX_ALLOWED <= __IPHONE_ ## VER
#define FOR_IOS_BETWEEN(LO, HI) FROM_IOS(LO) && TO_IOS(HI)

#ifndef UNRESTRICTED_AVAILABILITY
#define PS_AVAILABLE_IOS(VER) NS_AVAILABLE_IOS(VER)
#define PS_DEPRECATED_IOS(LO, HI) NS_DEPRECATED_IOS(LO, HI)
#define PS_TO_IOS(VER) PS_DEPRECATED_IOS(__IPHONE_5_0, VER)
#else
#define PS_AVAILABLE_IOS(VER)
#define PS_DEPRECATED_IOS(LO, HI)
#define PS_TO_IOS(VER)
#endif
