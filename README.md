# Luke's boardsource lily58 config

### Container builds

link `nice_view_custom` into the boards/shields directory of zmk source tree
```sh
west build -p -b nice_nano_v2 -S zmk-usb-logging -- -DZMK_CONFIG=/workspaces/lily58/config/ -DSHIELD="lily58_right nice_view_adapter nice_view_custom"
```
