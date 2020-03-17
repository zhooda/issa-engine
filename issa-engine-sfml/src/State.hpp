//
//  State.hpp
//  issa-engine
//
//  Created by Zeeshan Hooda on 3/2/20.
//  Copyright © 2020 Deceptive Labs. All rights reserved.
//

#pragma once

namespace Issa {

class State {
public:
    virtual void Init() = 0;
    
    virtual void HandleInput() = 0;
    virtual void Update(float dt) = 0;
    virtual void Draw(float dt) = 0;
    
    virtual void Pause() { }
    virtual void Resume() { }
};

}
