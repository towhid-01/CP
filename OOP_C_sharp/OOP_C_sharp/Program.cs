using System; 
using OOP_C_sharp; // Ensure this matches the namespace in Encapsulation.cs

class Program
{
    static void Main()
    {
        try
        {
            BankAccount account = new BankAccount(1000);
            Console.WriteLine($"Initial Balance: {account.Balance}");

            account.DepositMoney(500);
            Console.WriteLine($"Balance after deposit: {account.Balance}");

            account.WithdrawMoney(300);
            Console.WriteLine($"Balance after withdrawal: {account.Balance}");

            // This will throw an exception due to negative withdrawal amount
            account.WithdrawMoney(-200);
        }
        catch (ArgumentException ex)
        {
            Console.WriteLine($"Argument Error: {ex.Message}");
        }
        catch (InvalidOperationException ex)
        {
            Console.WriteLine($"Operation Error: {ex.Message}");
        }
        catch (Exception ex)
        {
            Console.WriteLine($"Unexpected Error: {ex.Message}");
        }
    }
}
