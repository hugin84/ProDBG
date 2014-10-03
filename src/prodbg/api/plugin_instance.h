#pragma once

#include <pd_ui.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

struct PDReader;
struct PDWriter;
struct PDViewPlugin;
struct PDBackendPlugin;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct PDBackendInstance
{
	PDBackendPlugin* plugin;
	void* userData;
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct ViewPluginInstance
{
	PDUI ui;
	struct PDViewPlugin* plugin;
	void* userData;
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct ViewPluginInstance* PluginInstance_createViewPlugin();
bool PluginInstance_init(struct ViewPluginInstance* instance, struct PDViewPlugin* plugin);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
}
#endif