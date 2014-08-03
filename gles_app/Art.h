#pragma once

#include "Texture.h"
#include "Singleton.h"

class Art
    : public Singleton<Art>
{
protected:
    Texture *m_player;
    Texture *m_seeker;
    Texture *m_wanderer;
    Texture *m_bullet;
    Texture *m_pointer;
    Texture *m_fontTexture;

protected:
    Art();

public:
    Texture *getPlayer() const;
    Texture *getSeeker() const;
    Texture *getWanderer() const;
    Texture *getBullet() const;
    Texture *getPointer() const;

//    tSpriteFont getFont() const;

    friend class Singleton<Art>;
};
