//
//  StateMachine.hpp
//  issa-engine
//
//  Created by Zeeshan Hooda on 3/2/20.
//  Copyright © 2020 Deceptive Labs. All rights reserved.
//

#pragma once

#include <memory>
#include <stack>

#include "State.hpp"

namespace Issa {

typedef std::unique_ptr<State> StateRef;

class StateMachine {
public:
    StateMachine() { }
    ~StateMachine() { }
    
    void AddState(StateRef newState, bool isReplacing = true);
    void RemoveState();
    
    void ProcessStateChanges();
    
    StateRef &GetActiveState();
    
private:
    std::stack<StateRef> _states;
    StateRef _newState;
    
    bool _isRemoving;
    bool _isAdding;
    bool _isReplacing;
};

}
