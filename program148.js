function DisplayFactors(iNo)
{
    let iCnt = 0;

    for(iCnt = 1; iCnt <= iNo/2;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            console.log("Factors :",iCnt)
        }
    }
}

function main()
{

   DisplayFactors(15)
}







main()