#ifndef __E32_VLX_NET__
#define __E32_VLX_NET__
#include <WiFi.h>
#include <WebServer.h>
#include <AutoConnect.h>

#define VERSION 20211103

////////////////////////////////////////////////////////////////////////////////
// Configure static IP
#define E32_USE_STATIC_IP 0
#define E32_STATIC_IP IPAddress(10,0,2,133)
#define E32_STATIC_GATEWAY IPAddress(10,0,2,1)
#define E32_STATIC_MASK IPAddress(255,255,255,0)
#define E32_STATIC_DNS IPAddress(10,0,2,1)
////////////////////////////////////////////////////////////////////////////////


#define UDP_PORT 5252
#define UDP_HOST "10.0.0.231"

extern String mac;
extern long min_dist;
void setUpNetwork();
String getIp();
void portalLoop();

int sendUDP(const char* msg);
void setMinDist(long d);
// Handle UDP message, returns 0 if no message received
int handleUDPReply();


#endif
