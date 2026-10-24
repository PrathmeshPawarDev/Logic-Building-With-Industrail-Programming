function SumOfFactors(iNo)
{
    let iCnt = 0;
    iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

function main()
{

    let iRet = 0;
    iRet = SumOfFactors(12)

    console.log("Sum of Factors ",iRet)

}







main()