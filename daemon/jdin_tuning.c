#include "jdin_tuning.h"

struct jdin_tuning_config jdin_tun;

void jdin_tuning_config_clear(struct jdin_tuning_config *p_jdin_tun){
    p_jdin_tun->callback_port = 0;
    p_jdin_tun->first_cli_set = 0;

}