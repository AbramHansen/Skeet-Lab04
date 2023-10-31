#pragma once
class InterfaceElement
{
   virtual void draw(StorageElement storage) = 0;
};

class InterfacePellet : public InterfaceElement
{
   void draw(StorageElement storage);
};

class InterfaceMissile : public InterfaceElement
{
   void draw(StorageElement storage);
};

class InterfaceBomb : public InterfaceElement
{
   void draw(StorageElement storage);
};

class InterfaceShrapnel : public InterfaceElement
{
   void draw(StorageElement storage);
};

class InterfaceStandardBird : public InterfaceElement
{
   void draw(StorageElement storage);
};

class InterfaceCrazyBird : public InterfaceElement
{
   void draw(StorageElement storage);
};

class InterfaceSinkerBird : public InterfaceElement
{
   void draw(StorageElement storage);
};

class InterfaceFloaterBird : public InterfaceElement
{
   void draw(StorageElement storage);
};

class InterfaceFragment : public InterfaceElement
{
   void draw(StorageElement storage);
};

class InterfaceExhaust : public InterfaceElement
{
   void draw(StorageElement storage);
};

class InterfaceStreak : public InterfaceElement
{
   void draw(StorageElement storage);
};