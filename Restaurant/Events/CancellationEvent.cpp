#include"CancellationEvent.h"
#include "..\Rest\Restaurant.h"
CancellationEvent::CancellationEvent(int EventTime , int OrderID):Event(EventTime,OrderID){

}


void CancellationEvent::Execute(Restaurant * pRest){

    // Search for order according to ID


    // Check that order isn't yet assigned

    // if not assigned cancel

    // if assigned do nothing



    //make the Orders to an array to be able to Search for id

    pRest->CancelOrder(OrderID);


}