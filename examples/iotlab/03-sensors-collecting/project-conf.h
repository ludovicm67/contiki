#ifndef PROJECT_ROUTER_CONF_H_
#define PROJECT_ROUTER_CONF_H_

// custom configuration
#undef RF_CHANNEL
#define RF_CHANNEL                     12
#undef IEEE802154_CONF_PANID
#define IEEE802154_CONF_PANID          0x0012
#undef NETSTACK_CONF_RDC
#define NETSTACK_CONF_RDC              contikimac_driver // nullrdc_driver
#define RF2XX_TX_POWER                 PHY_POWER_m17dBm
#define RF2XX_RX_RSSI_THRESHOLD        RF2XX_PHY_RX_THRESHOLD__m84dBm
// end custom configuration

#endif
