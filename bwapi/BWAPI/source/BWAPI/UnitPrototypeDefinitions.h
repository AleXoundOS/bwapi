#pragma once

#include "../BWAPI/AbilityPrototype.h"
#include "../BWAPI/UnitPrototype.h"
#include "../BWAPI/TargetType.h"

namespace BWAPI
{
  /** Ability and unit prototype definitions */
  namespace Prototypes
  {
    extern AbilityPrototype* Move;
    extern AbilityPrototype* Attack;
    extern AbilityPrototype* AttackMove;
    extern AbilityPrototype* Ensare;
    extern AbilityPrototype* Broodling; 
    extern AbilityPrototype* WarpArchon;
    extern AbilityPrototype* SiegeTank;
    extern AbilityPrototype* UnsiegeTank;
    extern AbilityPrototype* Gather;
    extern AbilityPrototype* MorphToLurker;
    extern AbilityPrototype* MorphToGuardian;
    extern AbilityPrototype* Stims;
    /** Terran */
    extern UnitPrototype* SCV;
    extern UnitPrototype* Marine;
    extern UnitPrototype* Firebat;
    extern UnitPrototype* Medic;
    extern UnitPrototype* SiegeTank_TankMode;
    extern UnitPrototype* TankTurret_TankMode;
    extern UnitPrototype* SiegeTank_SiegeMode;
    extern UnitPrototype* CommandCenter;
    extern UnitPrototype* SupplyDepot;
    extern UnitPrototype* Barracks;
    extern UnitPrototype* Goliath;
    extern UnitPrototype* GoliathTurret;
    extern UnitPrototype* Ghost;
    extern UnitPrototype* Wraith;
    extern UnitPrototype* BattleCruiser;
    extern UnitPrototype* Vulture;
    extern UnitPrototype* NuclearMissile;
    extern UnitPrototype* ScienceVessel;
    extern UnitPrototype* Valkyrie;
    extern UnitPrototype* ComsatStation;
    extern UnitPrototype* NuclearSilo;
    extern UnitPrototype* Refinery;
    extern UnitPrototype* Academy;
    extern UnitPrototype* Factory;
    extern UnitPrototype* ControlTower;
    extern UnitPrototype* ScienceFacility;
    extern UnitPrototype* CovertOps;
    extern UnitPrototype* PhysicsLab;
    extern UnitPrototype* MachineShop;
    extern UnitPrototype* EngineeringBay;
    extern UnitPrototype* Armory;
    extern UnitPrototype* MissileTurret;
    extern UnitPrototype* Bunker;

    /** Protoss */
    extern UnitPrototype* Probe;
    extern UnitPrototype* Zealot;
    extern UnitPrototype* HighTemplar;
    extern UnitPrototype* Dragoon;
    extern UnitPrototype* Nexus;
    extern UnitPrototype* Pylon;
    extern UnitPrototype* Gateway;
    extern UnitPrototype* CyberneticsCore;
   /** Zerg */
    extern UnitPrototype* Drone;
    extern UnitPrototype* Larva;
    extern UnitPrototype* Hatchery;
    extern UnitPrototype* Overlord;
    extern UnitPrototype* SpawningPool;
    extern UnitPrototype* Zergling;
    extern UnitPrototype* Queen;
    extern UnitPrototype* Mutalisk;
    /** other */
    extern UnitPrototype* MineralPatch1;
    extern UnitPrototype* MineralPatch2;
    extern UnitPrototype* MineralPatch3;
    extern UnitPrototype* VaspineGayser;
    extern UnitPrototype* None;

    extern UnitPrototype* unitIDToPrototypeTable[228];
  }
};
