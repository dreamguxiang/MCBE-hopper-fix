// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EquipItemGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EQUIPITEMGOAL
public:
    class EquipItemGoal& operator=(class EquipItemGoal const&) = delete;
    EquipItemGoal(class EquipItemGoal const&) = delete;
    EquipItemGoal() = delete;
#endif

public:
    /*0*/ virtual ~EquipItemGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void __unk_vfn_2();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    MCAPI EquipItemGoal(class Mob&);

protected:

private:
    MCAPI void _dropItem(class ItemStack const&) const;

};