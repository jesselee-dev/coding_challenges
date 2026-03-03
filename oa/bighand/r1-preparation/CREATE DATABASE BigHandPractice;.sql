CREATE DATABASE BigHandPractice;
GO

USE BigHandPractice;
GO

CREATE TABLE Clients (
    ClientID INT PRIMARY KEY,
    ClientName NVARCHAR(100),
    Industry NVARCHAR(50),
    Country NVARCHAR(50)
);

CREATE TABLE Invoices (
    InvoiceID INT PRIMARY KEY,
    ClientID INT FOREIGN KEY REFERENCES Clients(ClientID),
    Amount DECIMAL(10,2),
    InvoiceDate DATE,
    Status NVARCHAR(20)
);

INSERT INTO Clients VALUES
(1, 'Allen & Overy', 'Legal', 'UK'),
(2, 'Goldman Sachs', 'Finance', 'USA'),
(3, 'Deloitte', 'Consulting', 'USA'),
(4, 'Freshfields', 'Legal', 'UK'),
(5, 'KPMG', 'Consulting', 'Canada');

INSERT INTO Invoices VALUES
(1, 1, 15000.00, '2024-01-15', 'Paid'),
(2, 1, 22000.00, '2024-02-20', 'Paid'),
(3, 2, 8000.00, '2024-01-10', 'Unpaid'),
(4, 2, 31000.00, '2024-03-05', 'Paid'),
(5, 3, 12000.00, '2024-02-14', 'Unpaid'),
(6, 3, 9500.00, '2024-03-20', 'Paid'),
(7, 4, 27000.00, '2024-01-28', 'Paid'),
(8, 4, 5000.00, '2024-04-01', 'Unpaid'),
(9, 5, 18000.00, '2024-02-09', 'Paid'),
(10, 1, 11000.00, '2024-04-15', 'Unpaid');
GO