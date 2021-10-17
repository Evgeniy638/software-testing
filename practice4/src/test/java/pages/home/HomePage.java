package pages.home;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import pages.BasePage;
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
    String baseURL = "https://steampay.com/";

    /**
     * Web Elements
     */

    /**
     * Page Methods
     */
    public HomePage goToHome() {
        Log.info("Opening steampay Website.");
        driver.get(baseURL);
        return this;
    }

    public MainSliderInHomePage goToSlider() {
        return new MainSliderInHomePage(driver);
    }

    public CatalogInHomePage goToCatalog() {
        return new CatalogInHomePage(driver);
    }
}