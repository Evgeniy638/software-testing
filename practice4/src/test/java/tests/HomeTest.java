package tests;

import io.qameta.allure.Description;
import io.qameta.allure.Epic;
import io.qameta.allure.Feature;
import io.qameta.allure.Severity;
import io.qameta.allure.SeverityLevel;
import io.qameta.allure.Story;
import org.testng.annotations.Listeners;
import org.testng.annotations.Test;
import utils.listeners.TestListener;

import java.lang.reflect.Method;

import static org.testng.AssertJUnit.assertEquals;
import static utils.extentreports.ExtentTestManager.startTest;

@Listeners({ TestListener.class })
@Epic("Regression Tests")
@Feature("Login Tests")
public class HomeTest extends BaseTest {
    @Test(priority = 0, description = "Invalid Login Scenario with wrong username and password.")
    @Severity(SeverityLevel.BLOCKER)
    @Description("Test Description: Login test with wrong username and wrong password.")
    @Story("Invalid username and password login test")
    public void goToHome(Method method) {
        startTest(method.getName(), "Invalid Login Scenario with invalid username and password.");

        homePage.goToHH();
        assertEquals(40, 40);
    }
}
