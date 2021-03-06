#include "x11/atoms.hpp"

#include <xcb/xcb.h>
#include <xcb/xcb_atom.h>

xcb_atom_t _NET_WM_NAME;
xcb_atom_t _NET_WM_DESKTOP;
xcb_atom_t _NET_WM_WINDOW_TYPE;
xcb_atom_t _NET_WM_WINDOW_TYPE_DOCK;
xcb_atom_t _NET_WM_WINDOW_TYPE_NORMAL;
xcb_atom_t _NET_WM_PID;
xcb_atom_t _NET_WM_STATE;
xcb_atom_t _NET_WM_STATE_STICKY;
xcb_atom_t _NET_WM_STATE_SKIP_TASKBAR;
xcb_atom_t _NET_WM_STATE_ABOVE;
xcb_atom_t _NET_WM_STATE_MAXIMIZED_VERT;
xcb_atom_t _NET_WM_STRUT;
xcb_atom_t _NET_WM_STRUT_PARTIAL;
xcb_atom_t WM_PROTOCOLS;
xcb_atom_t WM_DELETE_WINDOW;
xcb_atom_t _XEMBED;
xcb_atom_t _XEMBED_INFO;
xcb_atom_t MANAGER;
xcb_atom_t WM_STATE;
xcb_atom_t _NET_SYSTEM_TRAY_OPCODE;
xcb_atom_t _NET_SYSTEM_TRAY_ORIENTATION;
xcb_atom_t _NET_SYSTEM_TRAY_VISUAL;
xcb_atom_t _NET_SYSTEM_TRAY_COLORS;
xcb_atom_t WM_TAKE_FOCUS;
xcb_atom_t Backlight;
xcb_atom_t BACKLIGHT;
xcb_atom_t _XROOTMAP_ID;
xcb_atom_t _XSETROOT_ID;
xcb_atom_t ESETROOT_PMAP_ID;

// clang-format off
cached_atom ATOMS[29] = {
  {"_NET_WM_NAME", sizeof("_NET_WM_NAME") - 1, &_NET_WM_NAME},
  {"_NET_WM_DESKTOP", sizeof("_NET_WM_DESKTOP") - 1, &_NET_WM_DESKTOP},
  {"_NET_WM_WINDOW_TYPE", sizeof("_NET_WM_WINDOW_TYPE") - 1, &_NET_WM_WINDOW_TYPE},
  {"_NET_WM_WINDOW_TYPE_DOCK", sizeof("_NET_WM_WINDOW_TYPE_DOCK") - 1, &_NET_WM_WINDOW_TYPE_DOCK},
  {"_NET_WM_WINDOW_TYPE_NORMAL", sizeof("_NET_WM_WINDOW_TYPE_NORMAL") - 1, &_NET_WM_WINDOW_TYPE_NORMAL},
  {"_NET_WM_PID", sizeof("_NET_WM_PID") - 1, &_NET_WM_PID},
  {"_NET_WM_STATE", sizeof("_NET_WM_STATE") - 1, &_NET_WM_STATE},
  {"_NET_WM_STATE_STICKY", sizeof("_NET_WM_STATE_STICKY") - 1, &_NET_WM_STATE_STICKY},
  {"_NET_WM_STATE_SKIP_TASKBAR", sizeof("_NET_WM_STATE_SKIP_TASKBAR") - 1, &_NET_WM_STATE_SKIP_TASKBAR},
  {"_NET_WM_STATE_ABOVE", sizeof("_NET_WM_STATE_ABOVE") - 1, &_NET_WM_STATE_ABOVE},
  {"_NET_WM_STATE_MAXIMIZED_VERT", sizeof("_NET_WM_STATE_MAXIMIZED_VERT") - 1, &_NET_WM_STATE_MAXIMIZED_VERT},
  {"_NET_WM_STRUT", sizeof("_NET_WM_STRUT") - 1, &_NET_WM_STRUT},
  {"_NET_WM_STRUT_PARTIAL", sizeof("_NET_WM_STRUT_PARTIAL") - 1, &_NET_WM_STRUT_PARTIAL},
  {"WM_PROTOCOLS", sizeof("WM_PROTOCOLS") - 1, &WM_PROTOCOLS},
  {"WM_DELETE_WINDOW", sizeof("WM_DELETE_WINDOW") - 1, &WM_DELETE_WINDOW},
  {"_XEMBED", sizeof("_XEMBED") - 1, &_XEMBED},
  {"_XEMBED_INFO", sizeof("_XEMBED_INFO") - 1, &_XEMBED_INFO},
  {"MANAGER", sizeof("MANAGER") - 1, &MANAGER},
  {"WM_STATE", sizeof("WM_STATE") - 1, &WM_STATE},
  {"_NET_SYSTEM_TRAY_OPCODE", sizeof("_NET_SYSTEM_TRAY_OPCODE") - 1, &_NET_SYSTEM_TRAY_OPCODE},
  {"_NET_SYSTEM_TRAY_ORIENTATION", sizeof("_NET_SYSTEM_TRAY_ORIENTATION") - 1, &_NET_SYSTEM_TRAY_ORIENTATION},
  {"_NET_SYSTEM_TRAY_VISUAL", sizeof("_NET_SYSTEM_TRAY_VISUAL") - 1, &_NET_SYSTEM_TRAY_VISUAL},
  {"_NET_SYSTEM_TRAY_COLORS", sizeof("_NET_SYSTEM_TRAY_COLORS") - 1, &_NET_SYSTEM_TRAY_COLORS},
  {"WM_TAKE_FOCUS", sizeof("WM_TAKE_FOCUS") - 1, &WM_TAKE_FOCUS},
  {"Backlight", sizeof("Backlight") - 1, &Backlight},
  {"BACKLIGHT", sizeof("BACKLIGHT") - 1, &BACKLIGHT},
  {"_XROOTMAP_ID", sizeof("_XROOTMAP_ID") - 1, &_XROOTMAP_ID},
  {"_XSETROOT_ID", sizeof("_XSETROOT_ID") - 1, &_XSETROOT_ID},
  {"ESETROOT_PMAP_ID", sizeof("ESETROOT_PMAP_ID") - 1, &ESETROOT_PMAP_ID},
};
// clang-format on
