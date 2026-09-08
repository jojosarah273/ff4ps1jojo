/* status/panel_grid.h — interpreted interface for func_80127F2C. */
#ifndef FF4_PORT_STATUS_PANEL_GRID_H
#define FF4_PORT_STATUS_PANEL_GRID_H

/* Clear {count} panel slots starting at slot {first_slot}. */
void status_panel_clear_slots(int first_slot, int count);

/* Install the label recipes for the current panel geometry. */
void status_panel_install_labels(void);

#endif
