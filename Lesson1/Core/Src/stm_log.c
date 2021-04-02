#include "stm_log.h"

void STM_LOG(char *s)
{
    CDC_Transmit_FS((uint8_t *)s, strlen(s));
}
