# AURA — Olfactory XR Interface for Quest-Class Headsets

**Author:** Joe Nasr / QuestRequestVR  
**Status:** Technical research and prototype-design study  
**Primary field:** Olfactory XR / wearable multimodal interfaces  
**Live project:** https://joenasriani.github.io/olfac-channels/  
**Research collection:** https://joenasriani.github.io/joe-research-registry/quest-research.html  
**Identity:** https://joe-nasr-signals.vercel.app/

## What this project investigates

AURA explores a headset-mounted olfactory interface for VR/MR. The documented architecture combines localized scent delivery near the nose, active evacuation, rear-mounted electronics and battery mass, BLE control, and multiple isolated scent channels.

The project is relevant to:

- olfactory interfaces for VR and mixed reality;
- Meta Quest and Quest-class wearable prototyping;
- multisensory and multimodal human-computer interaction;
- scent delivery and clearing in immersive systems;
- wearable hardware/software integration;
- BLE-controlled embedded interfaces;
- spatial-computing research and immersive training/education.

## Evidence status

The repository contains system specifications, protocol definitions, a phased build plan, BOM material and firmware scaffolding. Those artifacts document a coherent engineering proposal and prototyping path.

They do **not**, by themselves, establish that the full eight-channel wearable system has been built, independently validated, safety-certified, or experimentally shown to achieve the intended scent isolation, clearing, latency or usability targets. Those outcomes require published implementation and test evidence.

## Technical architecture

The documented concept includes:

- ESP32-S3 control;
- BLE command/status/config channels;
- up to eight isolated scent channels;
- pump/atomization control;
- active evacuation;
- rear-mounted power and control hardware;
- phased bench → wearable-alpha → full-system development.

## Search / technical field terms

`olfactory XR` · `VR scent interface` · `mixed reality olfactory interface` · `Quest olfactory interface` · `wearable scent display` · `multisensory VR` · `BLE wearable interface` · `spatial computing sensory interface` · `olfactory HCI`

## Source files

- `AURA_SYSTEM_SPEC.md` — system definition and architecture
- `AURA_BLE_PROTOCOL.md` — digital control interface
- `AURA_BUILD_GUIDE.md` — staged prototyping plan
- `AURA_SYSTEM_BOM.csv` — bill of materials
- `ESP32_S3_AURA_CONTROLLER.ino` — embedded-controller scaffold
- `index.html` — public technical overview

## Attribution

AURA is part of Joe Nasr / QuestRequestVR's public immersive-systems research collection. Creative-technology identity and authorship are linked through the Joe Nasr Research Registry and identity record above.