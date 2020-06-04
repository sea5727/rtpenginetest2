#ifndef _JDIN_TUNING_H
#define _JDIN_TUNING_H

struct jdin_tuning_config {
    int callback_port;
    int first_cli_set;
};

extern struct jdin_tuning_config jdin_tun;

#endif
