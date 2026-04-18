# NeuroShift
### Adaptive Cognitive Simulation Prototype in Unreal Engine 5 using C++ and Blueprints

**NeuroShift** is a first-person cognitive simulation prototype built in **Unreal Engine 5** with **C++**, **Blueprints**, and **Visual Studio Community**.  
The project is designed to demonstrate technical game programming ability in areas aligned with simulation-focused Unreal Engine development, including interactive systems, user session management, adaptive difficulty, gameplay architecture, UI flow, and prototype-driven development.

---

## Project Purpose

- developing interactive applications in **Unreal Engine**
- building maintainable gameplay systems in **C++**
- combining **object-oriented design** with modular Unreal workflows
- implementing session flow, UI, interaction systems, and simulation logic
- prototyping gameplay features quickly while preserving scalable architecture
- preparing for future integration with external data sources and APIs

The project is especially influenced by simulation, analytics, and cognitive gameplay design, making it a strong fit for environments involving **research prototypes**, **immersive simulations**, and **cross-disciplinary collaboration**.

---

## Tagline

**“An immersive training simulation that measures reaction, attention, memory, and decision-making while dynamically adapting difficulty through real-time player analytics.”**

---

## Overview

NeuroShift places the player inside a futuristic neuro-simulation lab where they complete a series of chamber-based cognitive trials.  
Each chamber evaluates a different dimension of player performance while the simulation monitors outcomes and adapts future difficulty.

### Planned chamber sequence

- **Attention Chamber**  
  The player identifies valid targets while ignoring distractions under time pressure.

- **Memory Chamber**  
  The player observes and reproduces patterns, routes, or ordered interactions.

- **Decision Chamber**  
  The player responds to a high-pressure emergency scenario by prioritizing tasks in the correct sequence.

At the end of a run, the system produces a session summary based on metrics such as:

- accuracy
- reaction time
- mistakes
- completion time
- difficulty progression
- final score

---

## Built With

- **Unreal Engine 5**
- **C++**
- **Blueprints**
- **UMG**
- **Visual Studio Community**
- Planned support for **JSON/API-driven configuration and analytics**

---

## Why This Project Fits an Unreal Engine Simulation Role

This project was designed to reflect responsibilities commonly expected in technical Unreal Engine prototype work, including:

- interactive application development in Unreal Engine
- gameplay and simulation system implementation
- session and state management
- user interface flow and GUI implementation
- reusable system architecture with C++ foundations
- integration-ready design for JSON, REST, or other API-based workflows
- support for future VFX, shader, and data-driven extensions
- level-based scenario prototyping for simulation objectives

Rather than focusing only on entertainment gameplay, NeuroShift emphasizes a blend of:

- **game programming**
- **simulation logic**
- **player performance analytics**
- **technical prototyping**
- **maintainable architecture**

---

## Technical Highlights

### C++-Driven Core Architecture
The project uses **C++** for foundational systems and long-term maintainability. Core architecture includes:

- persistent session state management
- chamber result tracking
- adaptive difficulty logic
- scoring systems
- reusable base classes
- interaction interfaces
- save/session data structures

### Blueprint for Rapid Prototyping
**Blueprints** are used where they provide the greatest value for iteration speed, including:

- chamber-specific gameplay logic
- interactable actors
- environmental scripting
- UI widget behavior
- debug/testing content

This hybrid workflow reflects a practical Unreal Engine production approach:  
**C++ for core systems, Blueprint for fast implementation and iteration.**

### User Session Management
The project is structured around a full player session flow:

- Main Menu
- Lab Hub
- Chamber entry
- Chamber completion
- results submission
- adaptive difficulty update
- end-of-session summary
- local save support

### API/Integration Readiness
The architecture is being prepared for future integration with external data systems such as:

- JSON-based chamber configuration
- REST-based result submission
- local analytics endpoints
- real-time simulation tuning

---

## Current Core Systems

The current project plan includes the following major systems:

- first-person player movement and interaction
- chamber-based level flow
- reusable interactable system
- adaptive difficulty manager
- chamber scoring and analytics
- local save/session history
- debug HUD for live system testing
- modular map and gameplay structure

---

## Development Environment

This project is developed using:

- **Unreal Engine 5**
- **Visual Studio Community**
- **Windows**

### Recommended Visual Studio Community setup

Install **Visual Studio Community** with these workloads:

- **Desktop development with C++**
- **Game development with C++**

Recommended optional components:

- Unreal Engine integration tools
- latest MSVC build tools
- Windows SDK

This setup is used for:

- generating and compiling Unreal C++ project files
- editing gameplay classes
- building and debugging the project
- maintaining scalable source structure during development

---

## Project Structure and Future Implementations

```text
Content/
  NeuroShift/
    Blueprints/
      Core/
      Player/
      Chambers/
      Interactables/
      UI/
      Managers/
      Debug/
    Maps/
    Materials/
    MaterialInstances/
    FX/
    Meshes/
    Textures/
    Audio/
    Data/
      DataAssets/
      DataTables/
      Structs/
    UI/
      Widgets/
      Fonts/
      Icons/
    Save/
    Developer/
Planned maps
L_MainMenu
L_LabHub
L_AttentionChamber
L_MemoryChamber
L_DecisionChamber
L_Results
L_PrototypeTest
Planned C++ Architecture

The project is organized around reusable C++ gameplay classes.

Core gameplay classes
NSGameInstance
Stores active session state across map transitions, chamber order, and adaptive difficulty data.
NSGameModeBase
Defines level/game rules and serves as a foundation for future specialized game modes.
NSPlayerController
Handles UI flow, input state transitions, and menu/game interaction control.
NSCharacter
Manages first-person movement, input, and interaction tracing.
NSSaveGame
Stores session history and local result data.
NSChamberBase
Shared base class for chamber timing, result collection, and scoring.
NSInteractableInterface
Standard interaction contract for doors, terminals, switches, and chamber launch objects.
Shared data structures
FChamberResult
FSessionResult
FAdaptiveState
FChamberConfig

These structures support a more maintainable and data-oriented approach to gameplay and simulation development.

Adaptive Difficulty Design

A central feature of NeuroShift is its adaptive simulation model.

The prototype evaluates performance using metrics such as:

response accuracy
average reaction time
mistakes
completion quality

These results influence future challenge levels by adjusting variables such as:

distractor count
spawn intervals
response windows
pattern complexity
pressure intensity

The first implementation uses a clear three-band model:

Easy
Normal
Hard

This keeps the system interpretable, testable, and easy to extend.

Design Goals

NeuroShift is being built to demonstrate the ability to:

design and implement interactive applications in Unreal Engine
prototype gameplay systems efficiently
structure systems using C++ and OOP principles
support user interface, transitions, and session management
build maintainable technical foundations for future content
communicate simulation outcomes through analytics and scoring
deliver a polished vertical slice rather than an oversized unfinished project
Future Technical Expansion

Potential future additions include:

JSON-driven chamber tuning
REST API or local endpoint integration
WebSocket-based live telemetry
shader-based stress and distortion effects
Niagara VFX enhancements
additional environment and chamber polish
expanded analytics dashboard
XR/VR-ready interaction structure
more advanced simulation pressure systems
Opening the Project
Install Unreal Engine 5
Install Visual Studio Community
Make sure C++ workloads are installed
Clone or download this repository
Open the .uproject file
Generate project files if prompted
Open the solution in Visual Studio Community
Build the project
Launch from Unreal Engine
Portfolio / Demo

This repository is intended to support a portfolio submission by providing:

source project structure
Unreal Engine prototype implementation
C++ gameplay architecture
a playable or local-run prototype build
documented technical design choices

For portfolio review, this project is best accompanied by:

a gameplay video
screenshots
a short technical breakdown
a downloadable local build or demo link
Status

NeuroShift is currently in active prototype development.

Current priorities
foundational C++ architecture
interaction system
session management
chamber framework
adaptive difficulty implementation
prototype test chamber
menu-to-session flow
Next major milestones
Attention Chamber implementation
Memory Chamber implementation
Decision Chamber implementation
results screen polish
data export / API integration
VFX and presentation refinement
Author: Hetansh Jigarbhai Patel
Aspiring Game Programmer | Unreal Engine Developer

NeuroShift is not intended to be a large-scale commercial title.
It is a focused technical Unreal Engine prototype designed to demonstrate strong fundamentals in:

C++ gameplay programming
Unreal Engine systems development
simulation-oriented design
interactive prototype construction
scalable Blueprint + C++ workflows

It reflects a deliberate effort to build a project aligned with the needs of a technical Unreal Engine role involving gameplay systems, simulation, and cross-functional prototype development.


```markdown
# NeuroShift
### Unreal Engine 5 Cognitive Simulation Prototype | C++ | Blueprints | Visual Studio Community
