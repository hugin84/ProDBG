#pragma once

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Setup/update

void ProDBG_create(void* window, int width, int height);
void ProDBG_setWindowSize(int width, int height);

void ProDBG_applicationLaunched();
void ProDBG_destroy();
void ProDBG_update();
void ProDBG_timedUpdate();

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Events

void ProDBG_addChar(unsigned short c);
void ProDBG_keyDown(int key, int modifier);
void ProDBG_keyUp(int key, int modifier);
void ProDBG_event(int eventId);
void ProDBG_scroll(const struct PDMouseWheelEvent& wheelEvent);
void ProDBG_setMousePos(float x, float y);
void ProDBG_setMouseState(int button, int state);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

