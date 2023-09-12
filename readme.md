# Build commands from zmk-config

## Splitty
### Left:
```
west build -d /home/marhalloweenvt/zmk-config/build/splitty/left -p -b holyiot_nrf52840 -- -DSHIELD=splitty_left -DZMK_CONFIG="/home/marhalloweenvt/zmk-config/config"
```
### Right:
```
west build -d /home/marhalloweenvt/zmk-config/build/splitty/right -p -b holyiot_nrf52840 -- -DSHIELD=splitty_right -DZMK_CONFIG="/home/marhalloweenvt/zmk-config/config"
```

## Sofle nrf52840
### Left:
```
west build -d /home/marhalloweenvt/zmk-config/build/sofle_nrf52840/left -p -b nice_nano_v2 -- -DSHIELD=sofle_nrf52840_left -DZMK_CONFIG="/home/marhalloweenvt/zmk-config/config"
```
### Right:
```
west build -d /home/marhalloweenvt/zmk-config/build/sofle_nrf52840/right -p -b nice_nano_v2 -- -DSHIELD=sofle_nrf52840_right -DZMK_CONFIG="/home/marhalloweenvt/zmk-config/config"
```

### Sample:
```
west build -d /home/marhalloweenvt/zmk-config/build/left -p -b holyiot_nrf52840 -- -DSHIELD=splitty_left -DZMK_CONFIG="/home/marhalloweenvt/zmk-config/config"
```