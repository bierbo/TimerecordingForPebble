/*
  Copyright 2016 Mirko Hansen

  This file is part of Timerecording for Pebble
  http://www.github.com/BaaaZen/TimerecordingForPebble

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

*/

#pragma once
#include <pebble.h>

static void msg_inbox_received_callback(DictionaryIterator *iter, void *context);
static GColor msg_parse_color(uint8_t c);
static void msg_parse_cmd_status_response(DictionaryIterator *iter);
static void msg_parse_js_cmd_response_tl_token(DictionaryIterator *iter);
static void msg_inbox_dropped_callback(AppMessageResult reason, void *context);
static void msg_outbox_sent_callback(DictionaryIterator *iter, void *context);
static void msg_outbox_failed_callback(DictionaryIterator *iter, AppMessageResult reason, void *context);


void msg_init(void);
void msg_deinit(void);
void msg_cmd_fetch_status(void);
void msg_cmd_action_punch(void);
void msg_cmd_response_tl_token(char *token);


#define MESSAGE_COLOR_BLACK 0
#define MESSAGE_COLOR_WHITE 1
#define MESSAGE_COLOR_RED 2
#define MESSAGE_COLOR_GREEN 3
#define MESSAGE_COLOR_BLUE 4
#define MESSAGE_COLOR_YELLOW 5
#define MESSAGE_COLOR_ORANGE 6
#define MESSAGE_COLOR_DARKGRAY 7
#define MESSAGE_COLOR_LIGHTGRAY 8

#define MESSAGE_CMD_STATUS_REQUEST 1
#define MESSAGE_CMD_STATUS_RESPONSE 2
#define MESSAGE_CMD_ACTION_PUNCH 3
#define MESSAGE_CMD_RESPONSE_TL_TOKEN 5

#define MESSAGE_KEY_CMD 1

#define MESSAGE_KEY_STATUS_RESPONSE_STATUS_CHECKED_IN 2
#define MESSAGE_KEY_STATUS_RESPONSE_STATUS_CONTENT_TEXT 3
#define MESSAGE_KEY_STATUS_RESPONSE_STATUS_CONTENT_COLOR 4

#define MESSAGE_KEY_STATUS_RESPONSE_FACE_ID 5
#define MESSAGE_KEY_STATUS_RESPONSE_FACE_TEXT 6
#define MESSAGE_KEY_STATUS_RESPONSE_FACE_COLOR 7
#define MESSAGE_KEY_STATUS_RESPONSE_FACE_TIME1_TEXT 8
#define MESSAGE_KEY_STATUS_RESPONSE_FACE_TIME1_COLOR 9
#define MESSAGE_KEY_STATUS_RESPONSE_FACE_TIME2_TEXT 10
#define MESSAGE_KEY_STATUS_RESPONSE_FACE_TIME2_COLOR 11

#define MESSAGE_KEY_STATUS_RESPONSE_FACE_CLEARALL 12

#define MESSAGE_KEY_TL_TOKEN 13

#define MESSAGE_JS_KEY_CMD 10000
#define MESSAGE_JS_KEY_TL_TOKEN 10001

#define MESSAGE_JS_CMD_RESPONSE_TL_TOKEN 2
