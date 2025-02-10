// /*What is Encapsulation?
// Encapsulation is one of the four fundamental OOP concepts.Encapsulation is the technique of making the fields 
// in a class private and providing access to the fields via public methods.It is a protective barrier that keeps 
// the data safe within the class and hides the data from outside the class.Encapsulation allows a class to hide
// the implementation details of its methods and fields.
// */

// 🟢 Task 1: Understanding Encapsulation
// There is a scenario, and you have to write a C# class based on it.

// Scenario:
// You're building a "Bank Account" system. Each account should have:
// ✔️ A private field for balance (so it can't be directly changed).
// ✔️ A method to Deposit money (adds money to balance).
// ✔️ A method to Withdraw money (subtracts money but only if balance is sufficient).
// ✔️ A method to GetBalance() that returns the current balance. 

// public class BankAccount{
//     private double balance; // private field for balance

//     public void DepositMoney(double amount){    // public method to deposit money
//         balance += amount;
//     }
//     public void WithdrawMoney(double amount){   // public method to withdraw money
//         if(balance >= amount){
//             Console.WriteLine($"Withdrawn {amount} from your account");
//             balance -= amount;
//         }
//         else {
//             Console.WriteLine("Insufficient balance");
//         }
        
//     }
//     public double GetBalance(){     // public method to get the current balance
//         return balance;
//     }
// }

// BankAccount account = new BankAccount();    // creating object of BankAccount class
// account.DepositMoney(1000);
// account.WithdrawMoney(500);
// Console.WriteLine(account.GetBalance());


// 🟠 Next Challenge: Improving Encapsulation
// Right now, balance is private, which is good, but:
// ❌ There's no way to initialize the balance when creating a new account.
// ❌ The class allows negative deposits, which should not be possible.

namespace OOP_C_sharp
{
    public class BankAccount
    {
        private double balance;

        public BankAccount(double amount)
        {
            if (amount <= 0)
            {
                throw new ArgumentException("Initial amount should be greater than 0");
            }
            balance = amount;
        }

        public void DepositMoney(double amount)
        {
            if (amount <= 0)
            {
                throw new ArgumentException("Deposit amount should be greater than 0");
            }
            balance += amount;
        }

        public void WithdrawMoney(double amount)
        {
            if (amount <= 0)
            {
                throw new ArgumentException("Withdraw amount should be greater than 0");
            }
            if (balance < amount)
            {
                throw new InvalidOperationException("Insufficient balance");
            }

            Console.WriteLine($"Withdrawn {amount} from your account");
            balance -= amount;
        }

        public double Balance => balance; // Read-only property
    }
}


