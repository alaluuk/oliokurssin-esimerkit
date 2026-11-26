# Aggregaatio esimerkki

## Luokkakaavio

```mermaid
classDiagram
    class Employe{
        - string fname
        - string lname
        + Employe()
        + Employe(string, string)
        + printEmploye() void
    }

    class Company{
        - string companyName
        - Employe employeesList
        + Company()
        + Company(string)
        + addEmploye(Employe) void
        + printEmployees() void
    }

    Company "*" o-- "*" Employe : works

```

## Tietokanta

Jos tämän sovelluksen tapainen data pitäisi tallentaa Relaatiotietokantaan, niin ratkaisu olisi tällainen:

- Employe ja Company taulujen välillä yhteys monen suhde moneen. Tarvitaan siis välitystaulu.

### ER-kaavio

```mermaid
erDiagram

    company || --o{ company_employe: "has employees"
    employe || --o{ company_employe: "works"

    company{
        INT idCompany PK
        VARCHAR(40) companyName
    }

    employe{
        INT idEmploye PK
        VARCHAR(30) fname
        VARCHAR(30) lname
    }

    company_employe{
        INT idCompany PK, FK
        INT idEmploye PK, FK
    }

```