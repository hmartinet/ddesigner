#include "actionpool.h"

ActionPool::ActionPool() :
  freePointAction((FreePointAction *) 0)
{
}

void ActionPool::setFreePointAction(FreePointAction *freePointAction)
{
  this->freePointAction = freePointAction;
}

FreePointAction *ActionPool::getFreePointAction()
{
  return this->freePointAction;
}

bool ActionPool::isFreePointAction()
{
  if (freePointAction == (FreePointAction *) 0)
    {
      return false;
    }
  return true;
}
