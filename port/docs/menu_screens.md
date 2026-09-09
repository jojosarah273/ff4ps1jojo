# Battle menu screens (80116720 dispatch slots)

The master menu dispatches through a jr-$a0 table at the tail of
`func_80116720`. Slots in order (Phase A trace): 80119BDC, 80119C24,
80119D48, 80119DE4, 80117660, 80119E7C, 80119A98, 80117E9C, 80117754,
80117628, 80118A40, 80119020, 801193F8, 801192F8, 80118B80, 80118D20,
80118EC0, 80118EF8, 80118AA8, 801190A8, 80119128, 801191B0, 80119210,
80117FA8, 80118534, 80119740, 8011770C, 8011777C, 80117698, 8011ACAC,
8011AC64, 8011AD14, 8011AD5C, 8011ADEC, 8011AE1C, 8011AE4C, 8011AE7C,
8011ADA4, 801198F0, 80119860, 80118750, 80117F10, 80117F78, 800F9C90,
8010DA88 (battle-command, 73 entries), 8011A690.

Interpretation status per slot: each handler will be interpreted into
`port/src/battle/screen_<n>.c` as the dispatch matures (next batches).
