#ifndef CUSTOM_ESP_SSLClient_FS_H
#define CUSTOM_ESP_SSLClient_FS_H
#include "ESP_Mail_FS.h"

#if defined(ESP_MAIL_DISABLE_SSL)
#undef USE_LIB_SSL_ENGINE
#undef USE_EMBED_SSL_ENGINE
#endif

#undef ESP_SSLCLIENT_ENABLE_DEBUG
#undef ESP_SSLCLIENT_ENABLE_SSL_ERROR_STRING
#endif
