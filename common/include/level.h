#ifndef _SIP_LEVEL_H
#define _SIP_LEVEL_H

#define SIP_LV_HIGH 2
#define SIP_LV_LOW 1
#define SIP_IS_HIGHI (SIP_LV_HIGH == sip_level())
#define SIP_IS_LOWI (SIP_LV_LOW == sip_level())

int sip_fd_to_level(int fd);
int sip_downgrade_fd(int fd);
int sip_path_to_level(const char* path);
int sip_level();

#endif
