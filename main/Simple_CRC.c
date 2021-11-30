#include <stdio.h>
#include <string.h>
#include "esp32/rom/crc.h"

#define BUFF_SIZE 1024

void crc32_publico(char crc[BUFF_SIZE])
{
    int len = strlen(crc);
    uint32_t crc32_publ = crc32_le(0x00000000, (uint8_t *)crc, len);
    printf("\nLine: 0x%x\n", crc32_publ);
}

void crc32_privado(char senha[], char crc[BUFF_SIZE])
{
    int len = strlen(crc) + strlen(senha);
    char buffer[len];
    sprintf(buffer, "%s%s", senha, crc);
    uint32_t crc32_priv = crc32_le(0x00000000, (uint8_t *)buffer, len); 
    printf("\nLine: 0x%x\n", crc32_priv);
}

void crc16_publico(char crc[BUFF_SIZE])
{
    int len = strlen(crc);
    uint32_t crc16_publ = crc16_le(0x0000, (uint8_t *)crc, len); 
    printf("\nLine: 0x%x\n", crc16_publ);
}

void crc16_privado(char senha[], char crc[BUFF_SIZE])
{
    int len = strlen(crc) + strlen(senha);
    char buffer[len];
    sprintf(buffer, "%s%s", senha, crc);
    uint32_t crc16_priv = crc16_le(0x0000, (uint8_t *)buffer, len);
    printf("\nLine: 0x%x\n", crc16_priv);
}

void app_main(void)
{
    char mensagem[] = "123456789";
    char senha[] = "1234";

    crc32_publico(mensagem);
    
    crc32_privado(senha,mensagem);

    crc16_publico(mensagem);

    crc16_privado(senha,mensagem);
}
