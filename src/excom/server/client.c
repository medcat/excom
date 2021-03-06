#include "excom.h"

/*
 * These functions need to be implemented by a linked library on
 * compile.  Excom will not provide these.
 */
#ifdef EXCOM_INCLUDE_SERVER_CLIENT
void excom_server_client_connect(excom_event_t event,
  excom_server_client_t* client)
{
  (void) event;
  (void) client;

  printf("[excom] server: Client connected\n");
}
void excom_server_client_read(excom_event_t event,
  excom_server_client_t* client)
{
  (void) event;
  (void) client;

  printf("[excom] server: Data available\n");
}

void excom_server_client_write(excom_event_t event,
  excom_server_client_t* client)
{
  (void) event;
  (void) client;
}

void excom_server_client_error(excom_event_t event,
  excom_server_client_t* client)
{
  (void) event;
  (void) client;
}

void excom_server_client_close(excom_event_t event,
  excom_server_client_t* client)
{
  (void) event;
  (void) client;

  printf("[excom] server: Client disconnected\n");
}
#endif
