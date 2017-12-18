#ifndef __PERSISTENCE_H__
#define __PERSISTENCE_H__

#define EEPROM_SIZE 1024

struct config_t
{
    byte cfg_version;
    byte cfg_ip[4];
    int cfg_net;
    int cfg_subnet;
    int cfg_universes[60];
    char cfg_myssid[32];
    char cfg_wifi_ssid[32];
    char cfg_wifi_password[32];
    char cfg_mesh_prefix[32];
    int cfg_mode; // 10 = client, 20 = ap, 30 = mesh
};

extern config_t config;

void persistence_init();
void persistence_clear();
void persistence_save_settings();
void persistence_load_settings();

char *cfgutil_get_ip_address();

#endif // __PERSISTENCE_H__