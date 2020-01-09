#ifndef PROJECT_ROUTER_CONF_H_
#define PROJECT_ROUTER_CONF_H_

// custom configuration
#undef RF_CHANNEL
#define RF_CHANNEL                     12
#undef IEEE802154_CONF_PANID
#define IEEE802154_CONF_PANID          0x0012
#undef NETSTACK_CONF_RDC
#define NETSTACK_CONF_RDC              nullrdc_driver // contikimac_driver
// end custom configuration

#endif
