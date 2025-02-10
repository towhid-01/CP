using OOP_C_sharp; // Ensure this matches the namespace in Encapsulation.cs

class Program
{
    static void Main()
    {
        try
        {
            BankAccount account = new BankAccount(1000);
            account.DepositMoney(500);
            account.WithdrawMoney(300);
            Console.WriteLine($"Current Balance: {account.Balance}");

            account.WithdrawMoney(-200);  // This will throw an exception
        }
        catch (Exception ex)
        {
            Console.WriteLine($"Error: {ex.Message}");
        }
    }
}

