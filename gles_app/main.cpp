
#include <stdlib.h>

#include "Renderer.h"
#include "Entity.h"
#include "EntityManager.h"
#include "PlayerShip.h"
#include "Input.h"

int main(
    int     argc,
    char  **argv
    )
{
	// Instantiate renderer. 
	Renderer::getInstance(); 

	// Instantiate entity manager, player ship, and add it to entity manager.
    EntityManager::getInstance()->add(PlayerShip::getInstance());

    while(1) 
    {
        // Update input.
        Input::getInstance()->update();

		// Update entities held by entity manager.
		EntityManager::getInstance()->update(); 

		// Draw all entities held by entity manager.
		EntityManager::getInstance()->draw(); 

		// Kick the renderer.
		Renderer::getInstance()->render();

        Sleep(20);
    }

    return 0;
}
