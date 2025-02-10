// What is Constructor?
// A constructor is a special method that runs when an object is created. 
// It helps initialize the object.

// 🎯 Task for Constructor
// Create a BankAccount class with:

// A default constructor that sets balance to 0
// A parameterized constructor to set an initial balance
// Constructor overloading for different initialization options
// Use this keyword to avoid code repetition


// 1️⃣ Default Constructor

public class BankAccount{
    private double balance;

    public BankAccount(){
        balance = 0;
    }

    public void DepositMoney(double amount){
        if(amount <= 0){
            throw new ArgumentException("Deposit amount should be greater than 0");
        }
        balance += amount;
    }
    public void WithdrawMoney(double amount){
        if(balance >= amount){
            Console.WriteLine($"Withdrawn {amount} from your account");
            balance -= amount;
        }
        else {
            Console.WriteLine("Insufficient balance");
        }
        
    }

    public double Balance => balance;
}

BankAccount account = new BankAccount();
account.DepositMoney(1000);
account.WithdrawMoney(500);
Console.WriteLine(account.Balance);

// 2️⃣ Parameterized Constructor

public class BankAccount{
    private double balance;
    public BankAccount(double amount){
        if(amount <= 0){
            throw new ArgumentException("Initial amount should be greater than 0");
        }
        balance = amount;
    }
    public void DepositMoney(double amount){
        if(amount <= 0){
            throw new ArgumentException("Deposit amount should be greater than 0");
        }
        balance += amount;
    }

    public void WithdrawMoney(double amount){
        if(balance >= amount){
            Console.WriteLine($"Withdrawn {amount} from your account");
            balance -= amount;
        }
        else {
            Console.WriteLine("Insufficient balance");
        }
        
    }

    public double Balance => balance;
}

BankAccount account = new BankAccount(1000);
account.DepositMoney(500);
account.WithdrawMoney(300);
Console.WriteLine(account.Balance);


// 3️⃣ Constructor Overloading

public class BankAccount{
    private double balance;
    public BankAccount(){
        balance = 0;
    }
    public BankAccount(double amount){
        if(amount <= 0){
            throw new ArgumentException("Initial amount should be greater than 0");
        }
        balance = amount;
    }
    public void DepositMoney(double amount){
        if(amount <= 0){
            throw new ArgumentException("Deposit amount should be greater than 0");
        }
        balance += amount;
    }

    public void WithdrawMoney(double amount){
        if(balance >= amount){
            Console.WriteLine($"Withdrawn {amount} from your account");
            balance -= amount;
        }
        else {
            Console.WriteLine("Insufficient balance");
        }
        
    }

    public double Balance => balance;
}

BankAccount account1 = new BankAccount();
BankAccount account2 = new BankAccount(1000);
account1.DepositMoney(1000);
account2.DepositMoney(500);
account1.WithdrawMoney(500);
account2.WithdrawMoney(300);
Console.WriteLine(account1.Balance);
Console.WriteLine(account2.Balance);


// 4️⃣ Using this Keyword

public class BankAccount{
    private double balance;
    public BankAccount(){
        this.balance = 0;
    }
    public BankAccount(double amount){
        if(amount <= 0){
            throw new ArgumentException("Initial amount should be greater than 0");
        }
        this.balance = amount;
    }
    public void DepositMoney(double amount){
        if(amount <= 0){
            throw new ArgumentException("Deposit amount should be greater than 0");
        }
        this.balance += amount;
    }
    public void WithdrawMoney(double amount){
        if(this.balance >= amount){
            Console.WriteLine($"Withdrawn {amount} from your account");
            this.balance -= amount;
        }
        else {
            Console.WriteLine("Insufficient balance");
        }
        
    }

    public Balance => this.balance;
}

BankAccount account1 = new BankAccount();
BankAccount account2 = new BankAccount(1000);
account1.DepositMoney(1000);
account2.DepositMoney(500);
account1.WithdrawMoney(500);
account2.WithdrawMoney(300);
Console.WriteLine(account1.Balance);
Console.WriteLine(account2.Balance);