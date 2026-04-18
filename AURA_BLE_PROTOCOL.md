# AURA_BLE_PROTOCOL

## Service
Service UUID: `AURA-CTRL-SVC`

## Characteristics
1. command (write)
2. status (notify/read)
3. config (read/write)

## Commands
Fire one:
{"cmd":"fire","ch":4,"pulse_ms":70,"clear_ms":1500}

Mix:
{"cmd":"mix","channels":[{"ch":1,"w":0.5},{"ch":7,"w":0.5}]}

Clear:
{"cmd":"clear"}

Stop:
{"cmd":"stop_all"}

## Rules
- cooldown per channel
- auto clear after fire
- stop all on disconnect
- block on low battery
