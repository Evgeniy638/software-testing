package pages;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import utils.logs.Log;

public class HomePage extends BasePage {
    /**
     * Constructor
     */
    public HomePage(WebDriver driver) {
        super(driver);
    }

    /**
     * Variables
     */
    String baseURL = "https://hh.ru/";

    /**
     * Web Elements
     */
    By signInButtonClass = By.className("btnSignIn");

    /**
     * Page Methods
     */
    //Go to Homepage
    public HomePage goToHH() {
        Log.info("Opening hh.ru Website.");
        driver.get(baseURL);
        return this;
    }

    //Go to LoginPage
    public LoginPage goToLoginPage() {
        Log.info("Going to Login Page..");
        click(signInButtonClass);
        return new LoginPage(driver);
    }
}