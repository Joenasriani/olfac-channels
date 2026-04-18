# AURA_SYSTEM_SPEC

## 1) Product definition
Aura is an **integrated olfactory facial interface and rear-strap upgrade** for a Quest-class headset.
It is not a room diffuser and not a separate desktop box.

Core objectives:
- Deliver short, localized scent pulses close to the user's nose
- Clear emitted scent rapidly using active evacuation
- Avoid front-heavy bulk by moving battery, controller, and pumps to the rear strap
- Expose a clean digital control interface suitable for VR/MR triggers

## 2) Repo-aligned architecture
Front interface:
- 8 piezo atomization heads grouped into left/right manifolds
- 2 nose-zone delivery ports
- 1 evacuation pickup port
- replaceable absorbent/condensation liner
- sealed service channel for tubing

Rear strap:
- ESP32-S3 controller
- BLE control service
- 8 pump drivers
- 1 evacuation pump driver
- battery pack
- charger / protection / regulators
- cartridge dock for 8 fluid reservoirs

## 3) Channel model
Each scent channel contains:
- 1 sealed reservoir / cartridge
- 1 miniature peristaltic pump
- 1 check valve
- 1 piezo atomizer + driver
- 1 short PTFE/silicone tube route
- 1 serviceable channel identifier

Suggested scent channel IDs:
C1 forest/pine
C2 smoke/burn
C3 ocean/salt
C4 coffee
C5 floral
C6 earth/rain
C7 citrus
C8 neutral cleaner / reset blend

## 4) Why this is closer to the repo than Blueprint
Blueprint output modeled a small standalone nebulizer module.
The repo points to a different product class:
- replacement facial interface
- rear strap counterweight battery
- 8-channel liquid delivery
- active scent evacuation
- BLE trigger path from headset/app

## 5) Operating modes
- IDLE: all pumps off, evac off
- PRIME: short low-duty fill to wet channel
- FIRE: channel pulse for X ms
- HOLD: optional low-level sustain pulse train
- CLEAR: evacuation pump runs for Y ms
- LOCKOUT: channel cooldown to reduce cross-contamination and pooling
- SERVICE: manual channel test / purge

## 6) Control philosophy
Required commands:
- fire one channel
- fire multiple channels with mix ratios
- clear / purge
- set global intensity
- prime channel
- stop all

## 7) Safety and reliability
Mandatory constraints:
- one-shot max pulse duration
- per-channel cooldown
- no pump activation if reservoir absent
- no atomizer drive if fan/evac fault when required by profile
- battery undervoltage lockout
- brownout-safe stop-all behavior
- sealed exhaust path with replaceable carbon filter
- materials compatible with fragrance liquids

## 8) Mechanical targets
Front interface:
- keep added front mass as low as practical
- ports positioned under nose cavity, not in direct skin contact
- tubing strain relief at hinge/strap transitions
- service access to liners and ports without full disassembly

Rear strap:
- battery as counterweight
- cartridge/pump block removable as service module
- quiet mounting for pump vibration isolation

## 9) Electrical targets
Power rails:
- battery bus
- regulated 5V for pumps
- regulated 3.3V for logic
- isolated / filtered rail for piezo drivers if noise demands it

Controller:
- ESP32-S3
- BLE GATT service
- I2C expansion optional
- MOSFET low-side switching for pumps and evacuation pump

## 10) Minimum viable prototype
MVP should implement:
- 4 channels first, then scale to 8
- one delivery port + one evacuation port
- BLE command set
- one clear cycle profile
- removable rear cartridge block

## 11) Full target build
- 8 channels
- 2 delivery manifolds
- active evacuation
- 10,000 mAh rear battery
- on-device status LEDs
- cartridge presence detection
- optional headset passthrough charging
