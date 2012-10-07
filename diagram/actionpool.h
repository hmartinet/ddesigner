#ifndef ACTIONPOOL_H
#define ACTIONPOOL_H

class FreePointAction;

class ActionPool
{
public:
  ActionPool();

  void setFreePointAction(FreePointAction* freePointAction);
  FreePointAction* getFreePointAction();
  bool isFreePointAction();

private:
  FreePointAction* freePointAction;
};

#endif // ACTIONPOOL_H
